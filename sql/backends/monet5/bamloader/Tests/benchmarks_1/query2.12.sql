WITH alig AS (
    SELECT *
    FROM bam.unpaired_alignments_i
    WHERE bam_flag(flag, 'firs_segm') <> bam_flag(flag, 'last_segm')
      AND bam_flag(flag, 'seco_alig') = True
      AND rname <> '*'
      AND pos > 0
      AND rnext = '*'
      AND pnext = 0
)
SELECT *
FROM (
    SELECT l.qname AS qname, l.rname AS rname, l.flag AS l_flag, l.pos AS l_pos, l.mapq AS l_mapq, l.cigar AS l_cigar, 
        l.rnext AS l_rnext, l.pnext AS l_pnext, l.tlen AS l_tlen, l.seq AS l_seq, l.qual AS l_qual, 
                                                 r.flag AS r_flag, r.pos AS r_pos, r.mapq AS r_mapq, r.cigar AS r_cigar, 
        r.rnext AS r_rnext, r.pnext AS r_pnext, r.tlen AS r_tlen, r.seq AS r_seq, r.qual AS r_qual, 
        CASE WHEN l.pos < r.pos 
             THEN r.pos - (l.pos + seq_length(l.cigar))
             ELSE l.pos - (r.pos + seq_length(r.cigar))
        END AS distance
    FROM (
        SELECT *
        FROM alig
        WHERE bam_flag(flag, 'firs_segm') = True
    ) AS l JOIN (
        SELECT *
        FROM alig
        WHERE bam_flag(flag, 'last_segm') = True
    ) AS r 
        ON  l.qname = r.qname
        AND l.rname = r.rname
) AS alig_joined
WHERE distance > 0
  AND distance < distance_2_12
ORDER BY rname;