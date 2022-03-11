#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form(S_NANE, S_SIGN, S_EXEC) {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, S_SIGN, S_EXEC){

}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf) 
	: Form(scf) {
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	// sign이 안 되어있을 경우
	checkExecute(executor);
	std::string file_name = getName() + "_shrubbery";
	std::ofstream fout;
	try {
		fout.open(file_name, std::ios_base::out);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::string askii_art = "      .~:-.~\n"
							"    .-;;$:*.,\n"
							"    :~-,:$;~,~-\n"
							"  ~-~*=!,-;-~-~:\n"
							" -!-~-,-:=*!.-;:,,\n"
							" ;:;:!**:;=-~;-:,~\n"
							" ~!~::!-;;**=!=:::\n"
							".~-*!!!!=*:;$**!!;,\n"
							".=!==**~==$!:;:!=~;\n"
							"~;!=$==$*$$!~:!!==,\n"
							" -:*;~$=;*=;*=;=;=\n"
							"  *-===*!$!**;;,\n"
							"       :*;-\n"
							"         *,\n"
							"         *-\n"      
							"         !=\n"
							"      .::-:,\n";
	fout << askii_art;
	fout.close();
}
