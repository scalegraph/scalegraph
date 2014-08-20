public class TwitterUser {
	public var userID: Long;
	public var location: String;

	def this(){
}	
	def this(id: Long, locate: String){
		userID = id;
		location = locate;
	}
	
}
