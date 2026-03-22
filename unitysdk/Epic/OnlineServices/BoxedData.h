#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_BOXEDDATA_GET_DATA_OFFSET UNITYSDK_OFFSET(0x18F21730)
#define EPIC_ONLINESERVICES_BOXEDDATA_SET_DATA_OFFSET UNITYSDK_OFFSET(0x18F21740)
#define EPIC_ONLINESERVICES_BOXEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18F21750)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int BoxedData_TypeDefinitionIndex = 31788;

	class BoxedData : public ::System::Object
	{
	public:
		::System::Object* _Data_k__BackingField; // 0x10

		::System::Void _ctor(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_BOXEDDATA__CTOR_OFFSET))(this, data);
		}

		::System::Object* get_Data()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_BOXEDDATA_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_BOXEDDATA_SET_DATA_OFFSET))(this, value);
		}
	};
}
