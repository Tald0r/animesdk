#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FNamePoolBase_1.h"

namespace Foundation { class SystemReaderWriterLockSlim; }

#define FOUNDATION_UNREAL_FTHREADSAFENAMEPOOL_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1A796010)
#define FOUNDATION_UNREAL_FTHREADSAFENAMEPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A796070)
#define FOUNDATION_UNREAL_FTHREADSAFENAMEPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A795F10)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FThreadSafeNamePool_TypeDefinitionIndex = 8792;

	class FThreadSafeNamePool : public ::Foundation::Unreal::FNamePoolBase_1<::Foundation::SystemReaderWriterLockSlim*>
	{
	public:
		static ::Foundation::Unreal::FThreadSafeNamePool** StaticGet_Instance()
		{
			return (::Foundation::Unreal::FThreadSafeNamePool**)Il2CppClass::FromTypeDefinitionIndex(FThreadSafeNamePool_TypeDefinitionIndex)->GetStaticField(0x7DD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTHREADSAFENAMEPOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTHREADSAFENAMEPOOL__CCTOR_OFFSET))();
		}

		static ::Foundation::Unreal::FThreadSafeNamePool* GetInstance()
		{
			return ((::Foundation::Unreal::FThreadSafeNamePool*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FTHREADSAFENAMEPOOL_GETINSTANCE_OFFSET))();
		}
	};
}
