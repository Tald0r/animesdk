#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_C185D8F088AE6FCE_Struct_2_9FAA954B513974AC.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1_6.h"
#include "unitysdk/Enum_3_190E3717882702BE_7.h"
#include "unitysdk/Enum_3_398BD10BC5EFDB3C.h"

class Class_0_16E4307DCC419505_299;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C185D8F088AE6FCE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x8BEA0E0)
#define CLASS_3_C185D8F088AE6FCE_METHOD_3_792AB6C2A2B589B3_OFFSET UNITYSDK_OFFSET(0x8BEA270)
#define CLASS_3_C185D8F088AE6FCE_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8BEA430)
#define CLASS_3_C185D8F088AE6FCE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8BEA3C0)
#define CLASS_3_C185D8F088AE6FCE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x8BEA000)
#define CLASS_3_C185D8F088AE6FCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x8BEA140)
#define CLASS_3_C185D8F088AE6FCE__CTOR_OFFSET UNITYSDK_OFFSET(0x8BEA1C0)

inline static constexpr unsigned int Class_3_C185D8F088AE6FCE_TypeDefinitionIndex = 67407;

class Class_3_C185D8F088AE6FCE : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_19 = 0x9D; // 0x0
	::System::Collections::Generic::List_1<::Class_3_C185D8F088AE6FCE_Struct_2_9FAA954B513974AC>* Field_3_17; // 0x48
	::MoleMole::Battle::Entity* Field_3_0; // 0x50
	::MoleMole::Battle::Entity* Field_3_1; // 0x58
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_299*>* Field_3_18; // 0x60
	::System::Single Field_3_10; // 0x68
	::System::Boolean Field_3_8; // 0x6C
	::System::Boolean Field_3_7; // 0x6D
	::System::Int32 Field_3_12; // 0x70
	::Enum_3_190E3717882702BE_7 Field_3_9; // 0x74
	::System::Single Field_3_4; // 0x78
	::Enum_3_398BD10BC5EFDB3C Field_3_3; // 0x7C
	::Enum_3_121CF606CB7E9CD1_6 Field_3_2; // 0x80
	::System::Boolean Field_3_14; // 0x84
	::System::Boolean Field_3_5; // 0x85
	::System::Boolean Field_3_13; // 0x86
	::System::Boolean Field_3_16; // 0x87
	::System::Boolean Field_3_6; // 0x88
	::System::Boolean Field_3_15; // 0x89
	::System::Boolean Field_3_11; // 0x8A

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C185D8F088AE6FCE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C185D8F088AE6FCE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C185D8F088AE6FCE_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C185D8F088AE6FCE_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_C185D8F088AE6FCE* Method_3_792AB6C2A2B589B3()
	{
		return ((::Class_3_C185D8F088AE6FCE*(*)())((::PBYTE)hIl2Cpp + CLASS_3_C185D8F088AE6FCE_METHOD_3_792AB6C2A2B589B3_OFFSET))();
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C185D8F088AE6FCE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C185D8F088AE6FCE_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
