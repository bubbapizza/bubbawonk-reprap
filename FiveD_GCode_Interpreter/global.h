inline void setUnits(bool u){
   for(byte i = 0; i < BUFFER_SIZE; i++)
     cdda[i]->set_units(u); 
};
