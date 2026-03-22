#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class AnimatorZoneDitherInCollision; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ANIMATORZONEDITHERINCOLLISION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x89E9810)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ANIMATORZONEDITHERINCOLLISION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x89E9820)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ANIMATORZONEDITHERINCOLLISION_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x89E9CF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ANIMATORZONEDITHERINCOLLISION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x89EA010)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ANIMATORZONEDITHERINCOLLISION_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x89E9FD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDitherInCollision_AnimatorZoneDitherInCollision_UnityGeneratedFormatter_TypeDefinitionIndex = 73054;

	class AnimatorZoneDitherInCollision_AnimatorZoneDitherInCollision_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AnimatorZoneDitherInCollision*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneDitherInCollision_AnimatorZoneDitherInCollision_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3FB50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneDitherInCollision_AnimatorZoneDitherInCollision_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3FB58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneDitherInCollision_AnimatorZoneDitherInCollision_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3FB60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneDitherInCollision_AnimatorZoneDitherInCollision_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3FB68);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneDitherInCollision_AnimatorZoneDitherInCollision_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3FB70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ANIMATORZONEDITHERINCOLLISION_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ANIMATORZONEDITHERINCOLLISION_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ANIMATORZONEDITHERINCOLLISION_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneDitherInCollision*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneDitherInCollision*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ANIMATORZONEDITHERINCOLLISION_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneDitherInCollision*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneDitherInCollision*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_ANIMATORZONEDITHERINCOLLISION_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
