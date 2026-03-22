#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModuleSlot.h"

namespace FluffyUnderware::Curvy::Generator { class CGData; }
namespace FluffyUnderware::Curvy::Generator { class CGDataRequestParameter; }
namespace FluffyUnderware::Curvy::Generator { class OutputSlotInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_ASSIGNNEWDATA_OFFSET UNITYSDK_OFFSET(0x1AEDD880)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_CANLINKTO_OFFSET UNITYSDK_OFFSET(0x1AEDD630)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x1AEDD870)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1AEDD000)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_GET_HASDATA_OFFSET UNITYSDK_OFFSET(0x1AEDDBF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_GET_OUTPUTINFO_OFFSET UNITYSDK_OFFSET(0x1AEDD020)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_LINKTO_OFFSET UNITYSDK_OFFSET(0x1AEDD4B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_LOADLINKEDSLOTS_OFFSET UNITYSDK_OFFSET(0x1AEDD090)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1AEDDC10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_SET_DATA_OFFSET UNITYSDK_OFFSET(0x1AEDD010)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_UNLINKFROM_OFFSET UNITYSDK_OFFSET(0x1AEDD4F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEDDDC0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModuleOutputSlot_TypeDefinitionIndex = 35765;

	class CGModuleOutputSlot : public ::FluffyUnderware::Curvy::Generator::CGModuleSlot
	{
	public:
		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>* data; // 0x40
		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>* LastRequestParameters; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>* get_Data()
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_SET_DATA_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::Generator::OutputSlotInfo* get_OutputInfo()
		{
			return ((::FluffyUnderware::Curvy::Generator::OutputSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_GET_OUTPUTINFO_OFFSET))(this);
		}

		::System::Void LoadLinkedSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_LOADLINKEDSLOTS_OFFSET))(this);
		}

		::System::Void LinkTo(::FluffyUnderware::Curvy::Generator::CGModuleSlot* inputSlot)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_LINKTO_OFFSET))(this, inputSlot);
		}

		::System::Void UnlinkFrom(::FluffyUnderware::Curvy::Generator::CGModuleSlot* inputSlot)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_UNLINKFROM_OFFSET))(this, inputSlot);
		}

		::System::Boolean CanLinkTo(::FluffyUnderware::Curvy::Generator::CGModuleSlot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_CANLINKTO_OFFSET))(this, other);
		}

		::System::Void ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_CLEARDATA_OFFSET))(this);
		}

		::System::Boolean get_HasData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_GET_HASDATA_OFFSET))(this);
		}

		::System::Void SetData(::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>* newData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_SETDATA_OFFSET))(this, newData);
		}

		::System::Void AssignNewData(::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>* newData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT_ASSIGNNEWDATA_OFFSET))(this, newData);
		}
	};
}
