import socketserver 


class customhandler(socketserver.BaseRequestHandler):
	
	def handle(self):
		self.data = self.request.recv(1024).strip()
		print(f"{self.client_address[0]} : {self.data}")
		# self.request.sendall(self.data.upper())

if __name__ == "__main__":
	HOST, PORT = "0.0.0.0",9999
	with socketserver.TCPServer((HOST,PORT), customhandler) as server:
		server.serve_forever()

