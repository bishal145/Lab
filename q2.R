a=readline("Enter Year:")
a=as.integer(a)
if((a%%4)==0){
  cat(a,"is a leap year.")
}else{
  cat(a,"is not a leap year.")
}