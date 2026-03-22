#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

class MonoUIAnimScroll;
namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class Action; }

#define MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x7C706F0)
#define MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x7C70700)
#define MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x7C70C80)
#define MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x7C71010)
#define MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x7C70FD0)

inline static constexpr unsigned int MonoUIAnimScroll_MonoUIAnimScroll_UnityGeneratedFormatter_TypeDefinitionIndex = 44084;

class MonoUIAnimScroll_MonoUIAnimScroll_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MonoUIAnimScroll*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Action*>** StaticGet_CachedSerializer0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIAnimScroll_MonoUIAnimScroll_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x436F0);
	}
	static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_CachedSerializer2()
	{
		return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIAnimScroll_MonoUIAnimScroll_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x436F8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MonoUIAnimScroll_MonoUIAnimScroll_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x43700);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::MonoUIAnimScroll*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUIAnimScroll*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
	}

	::System::Void Write(::MonoUIAnimScroll*& value, ::Sirenix::Serialization::IDataWriter* writer)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIAnimScroll*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_MONOUIANIMSCROLL_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
	}
};
