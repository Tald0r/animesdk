#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_0B711C9DAE503A1B_1_METHOD_1_C1EB52A4F4431ADE_OFFSET UNITYSDK_OFFSET(0x6AAD3C0)
#define CLASS_1_0B711C9DAE503A1B_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x6AAD3B0)
#define CLASS_1_0B711C9DAE503A1B_1_METHOD_1_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x6AAD260)
#define CLASS_1_0B711C9DAE503A1B_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x6AAD240)
#define CLASS_1_0B711C9DAE503A1B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x6AAD250)

inline static constexpr unsigned int Class_1_0B711C9DAE503A1B_1_TypeDefinitionIndex = 75312;

class Class_1_0B711C9DAE503A1B_1 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0B711C9DAE503A1B_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B711C9DAE503A1B_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B711C9DAE503A1B_1_METHOD_1_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0B711C9DAE503A1B_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1EB52A4F4431ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B711C9DAE503A1B_1_METHOD_1_C1EB52A4F4431ADE_OFFSET))(this);
	}
};
