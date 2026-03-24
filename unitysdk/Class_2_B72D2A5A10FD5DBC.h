#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_208CC9941471731A_356;
class Class_2_208CC9941471731A_873;
class Class_2_E87F1D15F1D4AC72;
class Class_3_4394288C61F3B24C;
class Class_3_9F8B7B204F0D8E1D_12;
namespace System { class Action; }
template <typename T> class Class_0_16E4307DCC41950C_13;
template <typename T> class Class_2_75527B5277EE1A90;

#define CLASS_2_B72D2A5A10FD5DBC_METHOD_2_5DBAF82BB967BBAF_OFFSET UNITYSDK_OFFSET(0xB145C90)
#define CLASS_2_B72D2A5A10FD5DBC__CTOR_OFFSET UNITYSDK_OFFSET(0xB1476D0)

inline static constexpr unsigned int Class_2_B72D2A5A10FD5DBC_TypeDefinitionIndex = 39389;

class Class_2_B72D2A5A10FD5DBC : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_75527B5277EE1A90<::System::Int32>* Field_2_7; // 0x50
	::System::Action* Field_2_11; // 0x58
	::Class_2_75527B5277EE1A90<::Class_3_4394288C61F3B24C*>* Field_2_9; // 0x60
	::Class_2_75527B5277EE1A90<::Class_2_208CC9941471731A_356*>* Field_2_2; // 0x68
	::Class_2_75527B5277EE1A90<::System::Int32>* Field_2_5; // 0x70
	::Class_2_75527B5277EE1A90<::System::Boolean>* Field_2_8; // 0x78
	::Class_2_75527B5277EE1A90<::System::Int32>* Field_2_6; // 0x80
	::Class_2_75527B5277EE1A90<::System::Boolean>* Field_2_4; // 0x88
	::Class_2_75527B5277EE1A90<::Class_3_9F8B7B204F0D8E1D_12*>* Field_2_10; // 0x90
	::Class_2_75527B5277EE1A90<::System::Boolean>* Field_2_3; // 0x98
	::Class_2_75527B5277EE1A90<::Class_2_208CC9941471731A_873*>* Field_2_1; // 0xA0
	::Class_0_16E4307DCC41950C_13<::System::Int32>* Field_2_0; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B72D2A5A10FD5DBC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5DBAF82BB967BBAF(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_B72D2A5A10FD5DBC_METHOD_2_5DBAF82BB967BBAF_OFFSET))(this, a1, a2);
	}
};
