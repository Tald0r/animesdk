#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::ProgressionSnapshot { class EndSnapshotOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ENDSNAPSHOTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x259A50)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ENDSNAPSHOTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8AED10)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ENDSNAPSHOTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x7A4F30)
#define EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ENDSNAPSHOTOPTIONSINTERNAL_SET_SNAPSHOTID_OFFSET UNITYSDK_OFFSET(0x2D38F0)

namespace Epic::OnlineServices::ProgressionSnapshot
{
	inline static constexpr unsigned int EndSnapshotOptionsInternal_TypeDefinitionIndex = 32295;

	struct alignas(4) EndSnapshotOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_SnapshotId; // 0x14

		::System::Void set_SnapshotId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ENDSNAPSHOTOPTIONSINTERNAL_SET_SNAPSHOTID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ENDSNAPSHOTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ENDSNAPSHOTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PROGRESSIONSNAPSHOT_ENDSNAPSHOTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
