#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BladeIllusionNPCInfo.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class BladeIllusionNPCGroupDataSo; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_BLADEILLUSIONNPCGROUPDATASO_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x81CDA60)
#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_BLADEILLUSIONNPCGROUPDATASO_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x81CDA70)
#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_BLADEILLUSIONNPCGROUPDATASO_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x81CDD30)
#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_BLADEILLUSIONNPCGROUPDATASO_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x81CDF40)
#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_BLADEILLUSIONNPCGROUPDATASO_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x81CDF00)

namespace MoleMole
{
	inline static constexpr unsigned int BladeIllusionNPCGroupDataSo_BladeIllusionNPCGroupDataSo_UnityGeneratedFormatter_TypeDefinitionIndex = 50090;

	class BladeIllusionNPCGroupDataSo_BladeIllusionNPCGroupDataSo_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::BladeIllusionNPCGroupDataSo*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::BladeIllusionNPCInfo>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::BladeIllusionNPCInfo>*>**)Il2CppClass::FromTypeDefinitionIndex(BladeIllusionNPCGroupDataSo_BladeIllusionNPCGroupDataSo_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44D50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_BLADEILLUSIONNPCGROUPDATASO_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_BLADEILLUSIONNPCGROUPDATASO_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_BLADEILLUSIONNPCGROUPDATASO_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::BladeIllusionNPCGroupDataSo*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::BladeIllusionNPCGroupDataSo*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_BLADEILLUSIONNPCGROUPDATASO_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::BladeIllusionNPCGroupDataSo*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::BladeIllusionNPCGroupDataSo*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO_BLADEILLUSIONNPCGROUPDATASO_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
