#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole { class InteractEntryModeBuddy; }

#define CLASS_3_CC0C9FA238E28177_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1566AAD0)
#define CLASS_3_CC0C9FA238E28177_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1566ABC0)
#define CLASS_3_CC0C9FA238E28177_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1566AC20)
#define CLASS_3_CC0C9FA238E28177_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1566AA60)
#define CLASS_3_CC0C9FA238E28177__CCTOR_OFFSET UNITYSDK_OFFSET(0x1566AB30)
#define CLASS_3_CC0C9FA238E28177__CTOR_OFFSET UNITYSDK_OFFSET(0x1566ABB0)

inline static constexpr unsigned int Class_3_CC0C9FA238E28177_TypeDefinitionIndex = 67367;

class Class_3_CC0C9FA238E28177 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x85; // 0x0
	::MoleMole::InteractEntryModeBuddy* Field_3_1; // 0x48
	::System::Boolean Field_3_0; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CC0C9FA238E28177__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC0C9FA238E28177__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC0C9FA238E28177_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC0C9FA238E28177_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CC0C9FA238E28177_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_CC0C9FA238E28177* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_CC0C9FA238E28177*(*)())((::PBYTE)hIl2Cpp + CLASS_3_CC0C9FA238E28177_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
