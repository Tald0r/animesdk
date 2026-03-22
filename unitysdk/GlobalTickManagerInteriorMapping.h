#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class InteriorMapping;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GLOBALTICKMANAGERINTERIORMAPPING_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B0C41E0)
#define GLOBALTICKMANAGERINTERIORMAPPING_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1B0C4240)
#define GLOBALTICKMANAGERINTERIORMAPPING_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B0C3880)
#define GLOBALTICKMANAGERINTERIORMAPPING_REGISTERINTERIORMAPPING_OFFSET UNITYSDK_OFFSET(0x1B0C40A0)
#define GLOBALTICKMANAGERINTERIORMAPPING_UNREGISTERINTERIORMAPPING_OFFSET UNITYSDK_OFFSET(0x1B0C4140)
#define GLOBALTICKMANAGERINTERIORMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C4250)

inline static constexpr unsigned int GlobalTickManagerInteriorMapping_TypeDefinitionIndex = 31594;

class GlobalTickManagerInteriorMapping : public ::Foundation::SingletonDisposable_1<::GlobalTickManagerInteriorMapping*>
{
public:
	::System::Collections::Generic::HashSet_1<::InteriorMapping*>* _delayRemoveInteriorMappingSet; // 0x10
	::System::Collections::Generic::HashSet_1<::InteriorMapping*>* _delayAddInteriorMappingSet; // 0x18
	::System::Collections::Generic::HashSet_1<::InteriorMapping*>* _interiorMappingSet; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOBALTICKMANAGERINTERIORMAPPING__CTOR_OFFSET))(this);
	}

	::System::Void OnUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOBALTICKMANAGERINTERIORMAPPING_ONUPDATE_OFFSET))(this);
	}

	::System::Void RegisterInteriorMapping(::InteriorMapping* interiorMapping)
	{
		return ((::System::Void(*)(::PVOID, ::InteriorMapping*))((::PBYTE)hIl2Cpp + GLOBALTICKMANAGERINTERIORMAPPING_REGISTERINTERIORMAPPING_OFFSET))(this, interiorMapping);
	}

	::System::Void UnregisterInteriorMapping(::InteriorMapping* interiorMapping)
	{
		return ((::System::Void(*)(::PVOID, ::InteriorMapping*))((::PBYTE)hIl2Cpp + GLOBALTICKMANAGERINTERIORMAPPING_UNREGISTERINTERIORMAPPING_OFFSET))(this, interiorMapping);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOBALTICKMANAGERINTERIORMAPPING_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOBALTICKMANAGERINTERIORMAPPING_ONCREATE_OFFSET))(this);
	}
};
