#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RBDDestruction { class FragmentJsonData; }

#define RBDDESTRUCTION_FRAGMENTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x151A0DF0)

namespace RBDDestruction
{
	inline static constexpr unsigned int FragmentObject_TypeDefinitionIndex = 29180;

	class FragmentObject : public ::System::Object
	{
	public:
		::Il2CppArray<::RBDDestruction::FragmentJsonData*>* fragments; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_FRAGMENTOBJECT__CTOR_OFFSET))(this);
		}
	};
}
