#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_FLOATCLAMPEDPOLICY_FOUNDATION_ICLAMPFUNC_SYSTEM_SINGLE__CLAMP_OFFSET UNITYSDK_OFFSET(0x1A209DF0)
#define FOUNDATION_FLOATCLAMPEDPOLICY_FOUNDATION_IMAXFUNC_SYSTEM_SINGLE__MAX_OFFSET UNITYSDK_OFFSET(0x1A209E20)
#define FOUNDATION_FLOATCLAMPEDPOLICY_FOUNDATION_IMINFUNC_SYSTEM_SINGLE__MIN_OFFSET UNITYSDK_OFFSET(0x1A209E10)
#define FOUNDATION_FLOATCLAMPEDPOLICY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A209E30)
#define FOUNDATION_FLOATCLAMPEDPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A209DE0)

namespace Foundation
{
	inline static constexpr unsigned int FloatClampedPolicy_TypeDefinitionIndex = 9083;

	class FloatClampedPolicy : public ::System::Object
	{
	public:
		static ::Foundation::FloatClampedPolicy** StaticGet_Instance()
		{
			return (::Foundation::FloatClampedPolicy**)Il2CppClass::FromTypeDefinitionIndex(FloatClampedPolicy_TypeDefinitionIndex)->GetStaticField(0x7CC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_FLOATCLAMPEDPOLICY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_FLOATCLAMPEDPOLICY__CCTOR_OFFSET))();
		}

		::System::Single Foundation_IClampFunc_System_Single__Clamp(::System::Single value, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FLOATCLAMPEDPOLICY_FOUNDATION_ICLAMPFUNC_SYSTEM_SINGLE__CLAMP_OFFSET))(this, value, min, max);
		}

		::System::Single Foundation_IMinFunc_System_Single__Min(::System::Single left, ::System::Single right)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FLOATCLAMPEDPOLICY_FOUNDATION_IMINFUNC_SYSTEM_SINGLE__MIN_OFFSET))(this, left, right);
		}

		::System::Single Foundation_IMaxFunc_System_Single__Max(::System::Single left, ::System::Single right)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_FLOATCLAMPEDPOLICY_FOUNDATION_IMAXFUNC_SYSTEM_SINGLE__MAX_OFFSET))(this, left, right);
		}
	};
}
