#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"
#include "unitysdk/UnrealTypes/FStructView.h"

#define STATETREECORE_STATETREENODEVIRTUALPROXY_COMPILE_OFFSET UNITYSDK_OFFSET(0x19BE9510)
#define STATETREECORE_STATETREENODEVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x19BE9530)
#define STATETREECORE_STATETREENODEVIRTUALPROXY_LINK_OFFSET UNITYSDK_OFFSET(0x19BE9520)
#define STATETREECORE_STATETREENODEVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD8570)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeNodeVirtualProxy_TypeDefinitionIndex = 26958;

	class StateTreeNodeVirtualProxy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::UnrealTypes::DataValidationResult Compile(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEVIRTUALPROXY_COMPILE_OFFSET))(this, self, instanceDataView);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEVIRTUALPROXY_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::FStructHandle GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET))(this);
		}
	};
}
