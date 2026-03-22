#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8289F2785D9AA990;
class Class_1_CC527FA3839977FC;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xA675C80)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA675BA0)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0xA675920)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_4A60C1A08CA791FD_OFFSET UNITYSDK_OFFSET(0xA675650)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_829B09E994469287_OFFSET UNITYSDK_OFFSET(0xA675C20)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xA675840)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA6757A0)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_998E122F46014853_OFFSET UNITYSDK_OFFSET(0xA675CC0)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA6755A0)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_BABB29523C48150E_OFFSET UNITYSDK_OFFSET(0xA6759A0)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_C51C698B8C597800_OFFSET UNITYSDK_OFFSET(0xA675E00)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_FD22C7645D5586B4_OFFSET UNITYSDK_OFFSET(0xA6753B0)
#define CLASS_1_D6B7E3EBE9F0425A_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA675310)
#define CLASS_1_D6B7E3EBE9F0425A__CTOR_OFFSET UNITYSDK_OFFSET(0xA675300)

inline static constexpr unsigned int Class_1_D6B7E3EBE9F0425A_TypeDefinitionIndex = 64045;

class Class_1_D6B7E3EBE9F0425A : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* Field_1_5; // 0x10
	::Class_1_CC527FA3839977FC* Field_1_0; // 0x18
	::Class_1_8289F2785D9AA990* Field_1_2; // 0x20
	::System::Action_1<::System::Int32>* Field_1_6; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_3; // 0x30
	::System::Int32 Field_1_7; // 0x38
	::System::Int32 Field_1_1; // 0x3C
	::System::Int32 Field_1_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_FD22C7645D5586B4(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_FD22C7645D5586B4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_4A60C1A08CA791FD(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_4A60C1A08CA791FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Boolean Method_1_389486378BEF2498(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_389486378BEF2498_OFFSET))(this, a1);
	}

	::System::Void Method_1_BABB29523C48150E(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_BABB29523C48150E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_829B09E994469287()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_829B09E994469287_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_998E122F46014853_OFFSET))(this);
	}

	::System::Single Method_1_C51C698B8C597800()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_C51C698B8C597800_OFFSET))(this);
	}
};
