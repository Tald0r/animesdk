#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

namespace CriWare { class CriAtomEx3dRegion; }
namespace CriWare { class CriAtomListener; }
namespace CriWare { class CriAtomSourceBase; }
namespace CriWare { class CriAtomTransceiver; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CRIWARE_CRIATOMREGION_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B0ACAC0)
#define CRIWARE_CRIATOMREGION_CRIINTERNALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B0ACEB0)
#define CRIWARE_CRIATOMREGION_CRIINTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1B0ACEA0)
#define CRIWARE_CRIATOMREGION_GET_REGION3DHN_OFFSET UNITYSDK_OFFSET(0x1B0ACAA0)
#define CRIWARE_CRIATOMREGION_INITIALIZEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B0ACDE0)
#define CRIWARE_CRIATOMREGION_INTERNALFINALIZE_OFFSET UNITYSDK_OFFSET(0x1B0ACCA0)
#define CRIWARE_CRIATOMREGION_INTERNALINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B0ACB60)
#define CRIWARE_CRIATOMREGION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B0ACB50)
#define CRIWARE_CRIATOMREGION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B0ACAD0)
#define CRIWARE_CRIATOMREGION_SET_REGION3DHN_OFFSET UNITYSDK_OFFSET(0x1B0ACAB0)
#define CRIWARE_CRIATOMREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0ACEC0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomRegion_TypeDefinitionIndex = 31214;

	class CriAtomRegion : public ::CriWare::CriMonoBehaviour
	{
	public:
		::CriWare::CriAtomEx3dRegion* _region3dHn_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::CriWare::CriAtomSourceBase*>* referringSources; // 0x30
		::System::Collections::Generic::List_1<::CriWare::CriAtomListener*>* referringListeners; // 0x38
		::System::Collections::Generic::List_1<::CriWare::CriAtomTransceiver*>* referringTransceivers; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION__CTOR_OFFSET))(this);
		}

		::CriWare::CriAtomEx3dRegion* get_region3dHn()
		{
			return ((::CriWare::CriAtomEx3dRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_GET_REGION3DHN_OFFSET))(this);
		}

		::System::Void set_region3dHn(::CriWare::CriAtomEx3dRegion* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriAtomEx3dRegion*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_SET_REGION3DHN_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_ONDESTROY_OFFSET))(this);
		}

		::System::Void InternalInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_INTERNALINITIALIZE_OFFSET))(this);
		}

		::System::Void InternalFinalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_INTERNALFINALIZE_OFFSET))(this);
		}

		::System::Void InitializeParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_INITIALIZEPARAMETERS_OFFSET))(this);
		}

		::System::Void CriInternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_CRIINTERNALUPDATE_OFFSET))(this);
		}

		::System::Void CriInternalLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMREGION_CRIINTERNALLATEUPDATE_OFFSET))(this);
		}
	};
}
