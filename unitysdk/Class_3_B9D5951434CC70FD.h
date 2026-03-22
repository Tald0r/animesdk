#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_15CCFE77B9E12299;
class Class_1_1CDA382D823F8E80;
class Class_1_BBBB2C2BE00F33C3;
class Class_3_B9D5951434CC70FD_Class_1_738603C51BD72DFA;
namespace MoleMole::Battle { class AnimatorButtonControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B9D5951434CC70FD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x9C28950)
#define CLASS_3_B9D5951434CC70FD_METHOD_3_6B015C3E5E148E39_OFFSET UNITYSDK_OFFSET(0x9C28C00)
#define CLASS_3_B9D5951434CC70FD_METHOD_3_92EB806315DCB90E_OFFSET UNITYSDK_OFFSET(0x9C28DC0)
#define CLASS_3_B9D5951434CC70FD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x9C28BA0)
#define CLASS_3_B9D5951434CC70FD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x9C28450)
#define CLASS_3_B9D5951434CC70FD__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C289B0)
#define CLASS_3_B9D5951434CC70FD__CTOR_OFFSET UNITYSDK_OFFSET(0x9C28A80)

inline static constexpr unsigned int Class_3_B9D5951434CC70FD_TypeDefinitionIndex = 51159;

class Class_3_B9D5951434CC70FD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::String** StaticGet_Field_3_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B9D5951434CC70FD_TypeDefinitionIndex)->GetStaticField(0x2EC60);
	}
	static ::System::String** StaticGet_Field_3_8()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B9D5951434CC70FD_TypeDefinitionIndex)->GetStaticField(0x2EC68);
	}
	static ::System::String** StaticGet_Field_3_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B9D5951434CC70FD_TypeDefinitionIndex)->GetStaticField(0x2EC70);
	}
	static ::System::String** StaticGet_Field_3_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B9D5951434CC70FD_TypeDefinitionIndex)->GetStaticField(0x2EC78);
	}
	static ::System::String** StaticGet_Field_3_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B9D5951434CC70FD_TypeDefinitionIndex)->GetStaticField(0x2EC80);
	}
	// static const ::System::Single Field_3_9; // 0x0
	// static const ::System::Int32 Field_3_18 = 0x61; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>* Field_3_2; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_B9D5951434CC70FD_Class_1_738603C51BD72DFA*>* Field_3_11; // 0x50
	::Class_1_1CDA382D823F8E80* Field_3_13; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_BBBB2C2BE00F33C3*>* Field_3_0; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_BBBB2C2BE00F33C3*>* Field_3_1; // 0x68
	::Class_1_15CCFE77B9E12299* Field_3_10; // 0x70
	::System::Collections::Generic::List_1<::System::String*>* Field_3_16; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>* Field_3_3; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_14; // 0x88
	::System::Boolean Field_3_15; // 0x90
	::System::Boolean Field_3_17; // 0x91
	::System::Boolean Field_3_12; // 0x92

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B9D5951434CC70FD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9D5951434CC70FD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9D5951434CC70FD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9D5951434CC70FD_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9D5951434CC70FD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_B9D5951434CC70FD* Method_3_6B015C3E5E148E39()
	{
		return ((::Class_3_B9D5951434CC70FD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_B9D5951434CC70FD_METHOD_3_6B015C3E5E148E39_OFFSET))();
	}

	::System::Void Method_3_92EB806315DCB90E(::Class_1_15CCFE77B9E12299* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_15CCFE77B9E12299*))((::PBYTE)hIl2Cpp + CLASS_3_B9D5951434CC70FD_METHOD_3_92EB806315DCB90E_OFFSET))(this, a1);
	}
};
