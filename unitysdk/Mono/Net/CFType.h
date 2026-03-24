#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_NET_CFTYPE_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x19D1AB90)
#define MONO_NET_CFTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D1AC10)

namespace Mono::Net
{
	inline static constexpr unsigned int CFType_TypeDefinitionIndex = 2584;

	class CFType : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFTYPE__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr GetTypeID(::System::IntPtr typeRef)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFTYPE_GETTYPEID_OFFSET))(typeRef);
		}
	};
}
