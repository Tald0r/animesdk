#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ReferTargetCoordsOption.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class DynamicString; }
namespace MoleMole::Config { class OffsetGroup; }
namespace MoleMole::Config { class PosRotTargetOption; }
namespace MoleMole::FlowCanvas::Nodes { class ConfigPosRotWithReferTarget; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CONFIGPOSROTWITHREFERTARGET_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xE867540)
#define MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CONFIGPOSROTWITHREFERTARGET_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0xE867550)
#define MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CONFIGPOSROTWITHREFERTARGET_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0xE867CB0)
#define MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CONFIGPOSROTWITHREFERTARGET_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE868140)
#define MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CONFIGPOSROTWITHREFERTARGET_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0xE868100)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ConfigPosRotWithReferTarget_ConfigPosRotWithReferTarget_UnityGeneratedFormatter_TypeDefinitionIndex = 74416;

	class ConfigPosRotWithReferTarget_ConfigPosRotWithReferTarget_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::FlowCanvas::Nodes::ConfigPosRotWithReferTarget*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotWithReferTarget_ConfigPosRotWithReferTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41510);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::DynamicString*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotWithReferTarget_ConfigPosRotWithReferTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41518);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::OffsetGroup*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::OffsetGroup*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotWithReferTarget_ConfigPosRotWithReferTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41520);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::PosRotTargetOption*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::PosRotTargetOption*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotWithReferTarget_ConfigPosRotWithReferTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41528);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ReferTargetCoordsOption>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ReferTargetCoordsOption>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotWithReferTarget_ConfigPosRotWithReferTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41530);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRotWithReferTarget_ConfigPosRotWithReferTarget_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41538);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CONFIGPOSROTWITHREFERTARGET_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CONFIGPOSROTWITHREFERTARGET_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CONFIGPOSROTWITHREFERTARGET_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::FlowCanvas::Nodes::ConfigPosRotWithReferTarget*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ConfigPosRotWithReferTarget*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CONFIGPOSROTWITHREFERTARGET_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::FlowCanvas::Nodes::ConfigPosRotWithReferTarget*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ConfigPosRotWithReferTarget*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CONFIGPOSROTWITHREFERTARGET_CONFIGPOSROTWITHREFERTARGET_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
