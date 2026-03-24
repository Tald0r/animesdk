#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7898AD955658DC56.h"
#include "unitysdk/Enum_3_EEDDB1C7E7D13854.h"

namespace System { class Action; }

#define CLASS_2_636B2F59931721BC_3_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x83D1E00)
#define CLASS_2_636B2F59931721BC_3_METHOD_2_4BF2F121259B1C84_OFFSET UNITYSDK_OFFSET(0x83D1D40)
#define CLASS_2_636B2F59931721BC_3_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x83D1D30)
#define CLASS_2_636B2F59931721BC_3__CTOR_OFFSET UNITYSDK_OFFSET(0x83D1DF0)

inline static constexpr unsigned int Class_2_636B2F59931721BC_3_TypeDefinitionIndex = 77262;

class Class_2_636B2F59931721BC_3 : public ::Class_1_7898AD955658DC56
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_3__CTOR_OFFSET))(this);
	}

	::Enum_3_EEDDB1C7E7D13854 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_EEDDB1C7E7D13854(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_3_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_4BF2F121259B1C84(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_3_METHOD_2_4BF2F121259B1C84_OFFSET))(this, a1);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_636B2F59931721BC_3_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
