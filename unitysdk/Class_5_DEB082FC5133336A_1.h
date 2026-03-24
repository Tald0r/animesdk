#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_B8EB3E9191ADE6A5.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_1685EC66FBD28897;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_95;

#define CLASS_5_DEB082FC5133336A_1_METHOD_5_261D4B62BEE14763_OFFSET UNITYSDK_OFFSET(0x10B8D620)
#define CLASS_5_DEB082FC5133336A_1_METHOD_5_4B5E18D144BFAD48_OFFSET UNITYSDK_OFFSET(0x10B8BF70)
#define CLASS_5_DEB082FC5133336A_1_METHOD_5_6EEC31C0D8C79060_OFFSET UNITYSDK_OFFSET(0x10B8D650)
#define CLASS_5_DEB082FC5133336A_1_METHOD_5_8787C9DCDF64024C_OFFSET UNITYSDK_OFFSET(0x10B8C6D0)
#define CLASS_5_DEB082FC5133336A_1_METHOD_5_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0x10B8D630)
#define CLASS_5_DEB082FC5133336A_1_METHOD_5_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x10B8C6B0)
#define CLASS_5_DEB082FC5133336A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10B8C620)

inline static constexpr unsigned int Class_5_DEB082FC5133336A_1_TypeDefinitionIndex = 65113;

class Class_5_DEB082FC5133336A_1 : public ::Class_4_B8EB3E9191ADE6A5
{
public:
	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Field_5_1; // 0x70
	::Class_0_16E4307DCC419505_95<::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*>* Field_5_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DEB082FC5133336A_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_4B5E18D144BFAD48(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_DEB082FC5133336A_1_METHOD_5_4B5E18D144BFAD48_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DEB082FC5133336A_1_METHOD_5_F0E307B84478A272_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Method_5_8787C9DCDF64024C()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DEB082FC5133336A_1_METHOD_5_8787C9DCDF64024C_OFFSET))(this);
	}

	::System::Void Method_5_261D4B62BEE14763(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_DEB082FC5133336A_1_METHOD_5_261D4B62BEE14763_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DEB082FC5133336A_1_METHOD_5_F0E307B84478A272_1_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_5_6EEC31C0D8C79060()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DEB082FC5133336A_1_METHOD_5_6EEC31C0D8C79060_OFFSET))(this);
	}
};
