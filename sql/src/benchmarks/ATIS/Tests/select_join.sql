select airline.airline_name,aircraft.aircraft_type from aircraft,airline,flight where flight.aircraft_code=aircraft.aircraft_code and flight.airline_code=airline.airline_code;
