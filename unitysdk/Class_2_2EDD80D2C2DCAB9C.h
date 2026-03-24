#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_51.h"
#include "unitysdk/Class_2_2EDD80D2C2DCAB9C_Enum_3_42680EF0330DCE65.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_270.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2EDD80D2C2DCAB9C_METHOD_2_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x12723B00)
#define CLASS_2_2EDD80D2C2DCAB9C_METHOD_2_E90E34E126AFD16F_OFFSET UNITYSDK_OFFSET(0x12723AF0)
#define CLASS_2_2EDD80D2C2DCAB9C_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12723590)
#define CLASS_2_2EDD80D2C2DCAB9C__CTOR_OFFSET UNITYSDK_OFFSET(0x12723390)

inline static constexpr unsigned int Class_2_2EDD80D2C2DCAB9C_TypeDefinitionIndex = 12261;

class Class_2_2EDD80D2C2DCAB9C : public ::Class_1_EBCA2A4357C4C8BF_51
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x40
	::System::String* Field_2_4; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x50
	::Class_2_2EDD80D2C2DCAB9C_Enum_3_42680EF0330DCE65 Field_2_2; // 0x58
	::System::Char Field_2_3; // 0x5C

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_270 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_270, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_2EDD80D2C2DCAB9C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EDD80D2C2DCAB9C_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_E90E34E126AFD16F(::Class_2_2EDD80D2C2DCAB9C_Enum_3_42680EF0330DCE65 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2EDD80D2C2DCAB9C_Enum_3_42680EF0330DCE65))((::PBYTE)hIl2Cpp + CLASS_2_2EDD80D2C2DCAB9C_METHOD_2_E90E34E126AFD16F_OFFSET))(this, a1);
	}

	::Class_2_2EDD80D2C2DCAB9C_Enum_3_42680EF0330DCE65 Method_2_40C5968D970A15A2()
	{
		return ((::Class_2_2EDD80D2C2DCAB9C_Enum_3_42680EF0330DCE65(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2EDD80D2C2DCAB9C_METHOD_2_40C5968D970A15A2_OFFSET))(this);
	}
};
