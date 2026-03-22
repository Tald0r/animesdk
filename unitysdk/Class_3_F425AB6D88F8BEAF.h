#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Battle/GamePlayLogicKind.h"

class Class_0_16E4307DCC419505_413;

#define CLASS_3_F425AB6D88F8BEAF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xA677F20)
#define CLASS_3_F425AB6D88F8BEAF_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA678010)
#define CLASS_3_F425AB6D88F8BEAF_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xA678070)
#define CLASS_3_F425AB6D88F8BEAF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xA677EB0)
#define CLASS_3_F425AB6D88F8BEAF__CCTOR_OFFSET UNITYSDK_OFFSET(0xA677F80)
#define CLASS_3_F425AB6D88F8BEAF__CTOR_OFFSET UNITYSDK_OFFSET(0xA678000)

inline static constexpr unsigned int Class_3_F425AB6D88F8BEAF_TypeDefinitionIndex = 72767;

class Class_3_F425AB6D88F8BEAF : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x45; // 0x0
	::Class_0_16E4307DCC419505_413* Field_3_1; // 0x48
	::MoleMole::Battle::GamePlayLogicKind Field_3_0; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F425AB6D88F8BEAF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F425AB6D88F8BEAF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F425AB6D88F8BEAF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F425AB6D88F8BEAF_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F425AB6D88F8BEAF_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_F425AB6D88F8BEAF* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F425AB6D88F8BEAF*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F425AB6D88F8BEAF_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
