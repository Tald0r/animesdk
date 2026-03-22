#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace System { class String; }

#define CLASS_3_2EE7A3A6DC8E86FF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x6EFA750)
#define CLASS_3_2EE7A3A6DC8E86FF_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x6EFA840)
#define CLASS_3_2EE7A3A6DC8E86FF_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x6EFA8A0)
#define CLASS_3_2EE7A3A6DC8E86FF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x6EFA6E0)
#define CLASS_3_2EE7A3A6DC8E86FF__CCTOR_OFFSET UNITYSDK_OFFSET(0x6EFA7B0)
#define CLASS_3_2EE7A3A6DC8E86FF__CTOR_OFFSET UNITYSDK_OFFSET(0x6EFA830)

inline static constexpr unsigned int Class_3_2EE7A3A6DC8E86FF_TypeDefinitionIndex = 64161;

class Class_3_2EE7A3A6DC8E86FF : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0xA9; // 0x0
	::System::String* Field_3_0; // 0x48
	::System::Single Field_3_1; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_2EE7A3A6DC8E86FF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EE7A3A6DC8E86FF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EE7A3A6DC8E86FF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EE7A3A6DC8E86FF_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EE7A3A6DC8E86FF_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_2EE7A3A6DC8E86FF* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_2EE7A3A6DC8E86FF*(*)())((::PBYTE)hIl2Cpp + CLASS_3_2EE7A3A6DC8E86FF_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
