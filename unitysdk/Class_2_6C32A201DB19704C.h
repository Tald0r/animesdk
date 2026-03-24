#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_96;

#define CLASS_2_6C32A201DB19704C_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBDFEBF0)
#define CLASS_2_6C32A201DB19704C_METHOD_2_0B1F644F30C33592_OFFSET UNITYSDK_OFFSET(0xBDFEDA0)
#define CLASS_2_6C32A201DB19704C_METHOD_2_971F3C496B0BF972_OFFSET UNITYSDK_OFFSET(0xBDFED70)
#define CLASS_2_6C32A201DB19704C_METHOD_2_AA46B4395B2D8E33_OFFSET UNITYSDK_OFFSET(0xBDFED80)
#define CLASS_2_6C32A201DB19704C_METHOD_2_AC04E7CF5073C32B_1_OFFSET UNITYSDK_OFFSET(0xBDFEDB0)
#define CLASS_2_6C32A201DB19704C_METHOD_2_AC04E7CF5073C32B_OFFSET UNITYSDK_OFFSET(0xBDFED90)
#define CLASS_2_6C32A201DB19704C_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xBDFEC00)
#define CLASS_2_6C32A201DB19704C__CTOR_OFFSET UNITYSDK_OFFSET(0xBDFECF0)

inline static constexpr unsigned int Class_2_6C32A201DB19704C_TypeDefinitionIndex = 48280;

class Class_2_6C32A201DB19704C : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_96<::System::String*>* Field_2_1; // 0x60
	::Class_0_16E4307DCC419505_96<::MoleMole::UI::FlowerShop::ESlotType>* Field_2_0; // 0x68
	::Class_0_16E4307DCC419505_96<::System::String*>* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C32A201DB19704C__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_96<::System::String*>* get_Name()
	{
		return ((::Class_0_16E4307DCC419505_96<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C32A201DB19704C_GET_NAME_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C32A201DB19704C_ONCREATEPROPERTY_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_96<::System::String*>* Method_2_971F3C496B0BF972()
	{
		return ((::Class_0_16E4307DCC419505_96<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C32A201DB19704C_METHOD_2_971F3C496B0BF972_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_96<::MoleMole::UI::FlowerShop::ESlotType>* Method_2_AA46B4395B2D8E33()
	{
		return ((::Class_0_16E4307DCC419505_96<::MoleMole::UI::FlowerShop::ESlotType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C32A201DB19704C_METHOD_2_AA46B4395B2D8E33_OFFSET))(this);
	}

	::System::Void Method_2_AC04E7CF5073C32B(::Class_0_16E4307DCC419505_96<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_96<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6C32A201DB19704C_METHOD_2_AC04E7CF5073C32B_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B1F644F30C33592(::Class_0_16E4307DCC419505_96<::MoleMole::UI::FlowerShop::ESlotType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_96<::MoleMole::UI::FlowerShop::ESlotType>*))((::PBYTE)hIl2Cpp + CLASS_2_6C32A201DB19704C_METHOD_2_0B1F644F30C33592_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC04E7CF5073C32B_1(::Class_0_16E4307DCC419505_96<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_96<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_6C32A201DB19704C_METHOD_2_AC04E7CF5073C32B_1_OFFSET))(this, a1);
	}
};
