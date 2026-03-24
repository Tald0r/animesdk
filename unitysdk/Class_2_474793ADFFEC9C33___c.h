#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_1;
class Class_2_474793ADFFEC9C33_Class_3_07E29DA24F858CF2;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_474793ADFFEC9C33___C_METHOD_1_CD2201D158D97D30_OFFSET UNITYSDK_OFFSET(0xB620C80)
#define CLASS_2_474793ADFFEC9C33___C_METHOD_1_D5A1A14C677498FB_1_OFFSET UNITYSDK_OFFSET(0xB620D80)
#define CLASS_2_474793ADFFEC9C33___C_METHOD_1_D5A1A14C677498FB_OFFSET UNITYSDK_OFFSET(0xB620C70)
#define CLASS_2_474793ADFFEC9C33___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB620C20)
#define CLASS_2_474793ADFFEC9C33___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB620C60)

inline static constexpr unsigned int Class_2_474793ADFFEC9C33___c_TypeDefinitionIndex = 44355;

class Class_2_474793ADFFEC9C33___c : public ::System::Object
{
public:
	static ::Class_2_474793ADFFEC9C33_Class_3_07E29DA24F858CF2** StaticGet___9__59_0()
	{
		return (::Class_2_474793ADFFEC9C33_Class_3_07E29DA24F858CF2**)Il2CppClass::FromTypeDefinitionIndex(Class_2_474793ADFFEC9C33___c_TypeDefinitionIndex)->GetStaticField(0x421F0);
	}
	static ::System::Action_2<::System::Int32, ::System::String*>** StaticGet___9__57_0()
	{
		return (::System::Action_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_474793ADFFEC9C33___c_TypeDefinitionIndex)->GetStaticField(0x421F8);
	}
	static ::Class_2_474793ADFFEC9C33___c** StaticGet___9()
	{
		return (::Class_2_474793ADFFEC9C33___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_474793ADFFEC9C33___c_TypeDefinitionIndex)->GetStaticField(0x42200);
	}
	static ::System::Action_2<::System::Int32, ::System::String*>** StaticGet___9__50_0()
	{
		return (::System::Action_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_474793ADFFEC9C33___c_TypeDefinitionIndex)->GetStaticField(0x42208);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_474793ADFFEC9C33___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_474793ADFFEC9C33___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D5A1A14C677498FB(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_474793ADFFEC9C33___C_METHOD_1_D5A1A14C677498FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD2201D158D97D30(::System::Int32 a1, ::System::String* a2, ::Class_1_945ACFB1FEBC7A2C_1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Class_1_945ACFB1FEBC7A2C_1*))((::PBYTE)hIl2Cpp + CLASS_2_474793ADFFEC9C33___C_METHOD_1_CD2201D158D97D30_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D5A1A14C677498FB_1(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_474793ADFFEC9C33___C_METHOD_1_D5A1A14C677498FB_1_OFFSET))(this, a1, a2);
	}
};
