#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNREALTYPES_GLOBALMANAGEDOBJECTREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A20BD50)

namespace UnrealTypes
{
	inline static constexpr unsigned int GlobalManagedObjectRegistry_TypeDefinitionIndex = 24751;

	class GlobalManagedObjectRegistry : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_ObjectList()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GlobalManagedObjectRegistry_TypeDefinitionIndex)->GetStaticField(0x1E1B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALMANAGEDOBJECTREGISTRY__CCTOR_OFFSET))();
		}
	};
}
