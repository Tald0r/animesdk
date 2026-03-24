#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ETickingGroup.h"
#include "unitysdk/Foundation/TickFunction_1.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_BDB3EC61F4E4691C_CLASS_2_9A621164AF3B9F42_DOTICK_OFFSET UNITYSDK_OFFSET(0x8BF96D0)
#define CLASS_2_BDB3EC61F4E4691C_CLASS_2_9A621164AF3B9F42_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8BF9880)
#define CLASS_2_BDB3EC61F4E4691C_CLASS_2_9A621164AF3B9F42_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8BF9930)
#define CLASS_2_BDB3EC61F4E4691C_CLASS_2_9A621164AF3B9F42__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF9640)

inline static constexpr unsigned int Class_2_BDB3EC61F4E4691C_Class_2_9A621164AF3B9F42_TypeDefinitionIndex = 39522;

class Class_2_BDB3EC61F4E4691C_Class_2_9A621164AF3B9F42 : public ::Foundation::TickFunction_1<::Foundation::ETickingGroup>
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x28
	::System::Boolean Field_2_2; // 0x30
	::System::Boolean Field_2_3; // 0x31
	::System::Single Field_2_1; // 0x34

	::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BDB3EC61F4E4691C_CLASS_2_9A621164AF3B9F42__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void DoTick(::System::Double a1, ::System::Single a2, ::Foundation::ETickingGroup a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Single, ::Foundation::ETickingGroup))((::PBYTE)hIl2Cpp + CLASS_2_BDB3EC61F4E4691C_CLASS_2_9A621164AF3B9F42_DOTICK_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDB3EC61F4E4691C_CLASS_2_9A621164AF3B9F42_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDB3EC61F4E4691C_CLASS_2_9A621164AF3B9F42_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
