int dataTypes(string type) {
  string data_type[5]={"Integer","Long","Float","Double","Character"};
  int size[5]{ 4,8,4,8,1};
  for (int i = 0; i < 5; i++){
    if (type == data_type[i]) {
      return size[i];
    }
  }
}
