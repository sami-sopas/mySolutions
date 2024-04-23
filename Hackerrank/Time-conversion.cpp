string timeConversion(string s) {
    
    string hour_str = s.substr(0,2); //12 as str
    
    int hour = stoi(hour_str); // 12 int
    
    size_t pos = s.find("PM"); //Verifica si existe pm en la cadena
    
    //Si no encontro pm
    if(pos != string::npos){
        if(hour + 12 < 24)
        hour_str = to_string(hour+12);
    }
    else{
        if(hour == 12){
            hour_str = "00";
        }
    }
    
    return s.replace(0,2,hour_str).erase(s.size() - 2);
    
    
    
}
