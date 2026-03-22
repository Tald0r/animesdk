#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_0DB664701F6ABC19;
namespace MoleMole { class InLevelBuddyDataItem; }
namespace System { class String; }

#define CLASS_1_8111D94208AF9330_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x6C76480)
#define CLASS_1_8111D94208AF9330_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x6C763F0)
#define CLASS_1_8111D94208AF9330_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x6C76520)
#define CLASS_1_8111D94208AF9330__CTOR_OFFSET UNITYSDK_OFFSET(0x6C763E0)

inline static constexpr unsigned int Class_1_8111D94208AF9330_TypeDefinitionIndex = 75100;

class Class_1_8111D94208AF9330 : public ::System::Object
{
public:
	::Class_3_0DB664701F6ABC19* Field_1_2; // 0x10
	::MoleMole::InLevelBuddyDataItem* Field_1_3; // 0x18
	::System::Int32 Field_1_4; // 0x20
	::System::Boolean Field_1_1; // 0x24
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8111D94208AF9330__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8111D94208AF9330_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8111D94208AF9330_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8111D94208AF9330_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
