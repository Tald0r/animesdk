#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_67C051A8B566820B_METHOD_1_D4FF340FCC4EA34D_OFFSET UNITYSDK_OFFSET(0x19E0D7E0)
#define CLASS_1_67C051A8B566820B_METHOD_1_F01C5B6A30AB37DD_OFFSET UNITYSDK_OFFSET(0x19DFF9D0)
#define CLASS_1_67C051A8B566820B_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19E0D760)
#define CLASS_1_67C051A8B566820B__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0DA70)

inline static constexpr unsigned int Class_1_67C051A8B566820B_TypeDefinitionIndex = 32477;

class Class_1_67C051A8B566820B : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::IDisposable*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67C051A8B566820B__CTOR_OFFSET))(this);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67C051A8B566820B_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D4FF340FCC4EA34D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_67C051A8B566820B_METHOD_1_D4FF340FCC4EA34D_OFFSET))(this, a1);
	}

	::System::Void Method_1_F01C5B6A30AB37DD(::System::IDisposable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IDisposable*))((::PBYTE)hIl2Cpp + CLASS_1_67C051A8B566820B_METHOD_1_F01C5B6A30AB37DD_OFFSET))(this, a1);
	}
};
