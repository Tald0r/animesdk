#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_679286007DE1DCF6;
class Class_1_8FEF1B677CF208A3;
class Class_2_A8F5ABF31E066ED4;
class Class_3_95057EC4B32AF4CA_1_Class_4_4D4C63C6764AD4E3;
class Class_3_95057EC4B32AF4CA_Class_4_3CC124CF59CEF07A;
class PopText;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_DF53B6F09A092D69_METHOD_1_40E0CE64ACD97CF1_OFFSET UNITYSDK_OFFSET(0x730E2A0)
#define CLASS_1_DF53B6F09A092D69_METHOD_1_6D0D7535CF069925_OFFSET UNITYSDK_OFFSET(0x730E580)
#define CLASS_1_DF53B6F09A092D69_METHOD_1_8766C991313172C8_1_OFFSET UNITYSDK_OFFSET(0x730E640)
#define CLASS_1_DF53B6F09A092D69_METHOD_1_8766C991313172C8_OFFSET UNITYSDK_OFFSET(0x730E440)
#define CLASS_1_DF53B6F09A092D69_METHOD_1_A95735FA4BAF19FE_OFFSET UNITYSDK_OFFSET(0x730E100)
#define CLASS_1_DF53B6F09A092D69__CTOR_OFFSET UNITYSDK_OFFSET(0x730E040)

inline static constexpr unsigned int Class_1_DF53B6F09A092D69_TypeDefinitionIndex = 43181;

class Class_1_DF53B6F09A092D69 : public ::System::Object
{
public:
	::PopText* Field_1_4; // 0x10
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::Class_1_8FEF1B677CF208A3*>* Field_1_5; // 0x28
	::System::Action_2<::System::Boolean, ::System::Boolean>* Field_1_0; // 0x30
	::Class_1_679286007DE1DCF6* Field_1_1; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_1_6; // 0x40

	::System::Void _ctor(::Class_1_679286007DE1DCF6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_679286007DE1DCF6*))((::PBYTE)hIl2Cpp + CLASS_1_DF53B6F09A092D69__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_DF53B6F09A092D69* Method_1_8766C991313172C8(::Class_3_95057EC4B32AF4CA_Class_4_3CC124CF59CEF07A* a1)
	{
		return ((::Class_1_DF53B6F09A092D69*(*)(::Class_3_95057EC4B32AF4CA_Class_4_3CC124CF59CEF07A*))((::PBYTE)hIl2Cpp + CLASS_1_DF53B6F09A092D69_METHOD_1_8766C991313172C8_OFFSET))(a1);
	}

	::System::Void Method_1_A95735FA4BAF19FE(::Class_3_95057EC4B32AF4CA_Class_4_3CC124CF59CEF07A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_95057EC4B32AF4CA_Class_4_3CC124CF59CEF07A*))((::PBYTE)hIl2Cpp + CLASS_1_DF53B6F09A092D69_METHOD_1_A95735FA4BAF19FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D0D7535CF069925(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DF53B6F09A092D69_METHOD_1_6D0D7535CF069925_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_40E0CE64ACD97CF1(::Class_3_95057EC4B32AF4CA_1_Class_4_4D4C63C6764AD4E3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_95057EC4B32AF4CA_1_Class_4_4D4C63C6764AD4E3*))((::PBYTE)hIl2Cpp + CLASS_1_DF53B6F09A092D69_METHOD_1_40E0CE64ACD97CF1_OFFSET))(this, a1);
	}

	static ::Class_1_DF53B6F09A092D69* Method_1_8766C991313172C8_1(::Class_3_95057EC4B32AF4CA_1_Class_4_4D4C63C6764AD4E3* a1)
	{
		return ((::Class_1_DF53B6F09A092D69*(*)(::Class_3_95057EC4B32AF4CA_1_Class_4_4D4C63C6764AD4E3*))((::PBYTE)hIl2Cpp + CLASS_1_DF53B6F09A092D69_METHOD_1_8766C991313172C8_1_OFFSET))(a1);
	}
};
