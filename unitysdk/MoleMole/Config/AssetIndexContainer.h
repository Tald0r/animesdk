#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class AssetIndex; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xC2285A0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FROMFLX_OFFSET UNITYSDK_OFFSET(0xC2282D0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_02A12E3EB78B97E4_OFFSET UNITYSDK_OFFSET(0xC22B2E0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xC22B2A0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0xC228600)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC2289E0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_4BAFA0CFC7F726F7_OFFSET UNITYSDK_OFFSET(0xC2297F0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_51BD034635AC1550_OFFSET UNITYSDK_OFFSET(0xC228930)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_57179B5F619FA243_OFFSET UNITYSDK_OFFSET(0xC229A80)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0xC228350)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_802C20CD8241DF51_OFFSET UNITYSDK_OFFSET(0xC228880)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_879C022B18434375_OFFSET UNITYSDK_OFFSET(0xC22A950)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_9785ACFC436B17D9_OFFSET UNITYSDK_OFFSET(0xC22B350)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_D14E91C58C8A620A_OFFSET UNITYSDK_OFFSET(0xC228B20)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_DFD80F2C189E34C9_1_OFFSET UNITYSDK_OFFSET(0xC22B1F0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_DFD80F2C189E34C9_OFFSET UNITYSDK_OFFSET(0xC228A70)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_F5362F5AA1FF766E_OFFSET UNITYSDK_OFFSET(0xC228C40)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC2280D0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC2287E0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xC2287D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AssetIndexContainer_TypeDefinitionIndex = 48624;

	class AssetIndexContainer : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::System::ValueTuple_2<::System::UInt64, ::MoleMole::Config::AssetIndexContainer*>>** StaticGet_AssetIndexCacheDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::System::ValueTuple_2<::System::UInt64, ::MoleMole::Config::AssetIndexContainer*>>**)Il2CppClass::FromTypeDefinitionIndex(AssetIndexContainer_TypeDefinitionIndex)->GetStaticField(0x43E30);
		}
		// static const ::System::String* ASSET_INDEX_FILE_PREFIX; // 0x0
		::MoleMole::Config::AssetIndex* assetIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER__CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_157E312840A3BD00_OFFSET))(this, a1, a2);
		}

		static ::System::String* Method_1_802C20CD8241DF51(::Foundation::ResourceFileType a1)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_802C20CD8241DF51_OFFSET))(a1);
		}

		::System::Void Method_1_51BD034635AC1550(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_51BD034635AC1550_OFFSET))(this, a1);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		static ::System::String* Method_1_DFD80F2C189E34C9(::Foundation::ResourceFileType a1)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_DFD80F2C189E34C9_OFFSET))(a1);
		}

		static ::MoleMole::Config::AssetIndexContainer* Method_1_F5362F5AA1FF766E(::System::String* a1, ::Foundation::ResourceFileType a2, ::System::Boolean& a3)
		{
			return ((::MoleMole::Config::AssetIndexContainer*(*)(::System::String*, ::Foundation::ResourceFileType, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_F5362F5AA1FF766E_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::System::Byte>* Method_1_879C022B18434375(::MoleMole::Config::AssetIndexContainer* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::MoleMole::Config::AssetIndexContainer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_879C022B18434375_OFFSET))(a1);
		}

		static ::System::String* Method_1_DFD80F2C189E34C9_1(::Foundation::ResourceFileType a1)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_DFD80F2C189E34C9_1_OFFSET))(a1);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_128774387667156B_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* Method_1_4BAFA0CFC7F726F7(::System::IO::Stream* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_4BAFA0CFC7F726F7_OFFSET))(a1);
		}

		static ::System::String* Method_1_D14E91C58C8A620A(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_D14E91C58C8A620A_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::Foundation::AssetPath>* Method_1_02A12E3EB78B97E4()
		{
			return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_02A12E3EB78B97E4_OFFSET))(this);
		}

		static ::System::Void Method_1_57179B5F619FA243(::Il2CppArray<::System::Byte>* a1, ::MoleMole::Config::AssetIndexContainer* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::MoleMole::Config::AssetIndexContainer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_57179B5F619FA243_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt64>* Method_1_9785ACFC436B17D9()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_METHOD_1_9785ACFC436B17D9_OFFSET))(this);
		}
	};
}
