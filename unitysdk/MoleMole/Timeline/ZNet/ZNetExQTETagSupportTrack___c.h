#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline::ZNet { class ZNetGroupTrack; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Timeline { class GroupTrack; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_METHOD_1_0D2A79BBA866D7DC_OFFSET UNITYSDK_OFFSET(0x9AE1D40)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_METHOD_1_735B19F2BDC753A9_1_OFFSET UNITYSDK_OFFSET(0x9AE1DD0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_METHOD_1_735B19F2BDC753A9_OFFSET UNITYSDK_OFFSET(0x9AE1D20)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AE1CD0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9AE1D10)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetExQTETagSupportTrack___c_TypeDefinitionIndex = 58043;

	class ZNetExQTETagSupportTrack___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZNetExQTETagSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x2FCA0);
		}
		static ::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZNetExQTETagSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x2FCA8);
		}
		static ::MoleMole::Timeline::ZNet::ZNetExQTETagSupportTrack___c** StaticGet___9()
		{
			return (::MoleMole::Timeline::ZNet::ZNetExQTETagSupportTrack___c**)Il2CppClass::FromTypeDefinitionIndex(ZNetExQTETagSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x2FCB0);
		}
		static ::System::Func_2<::UnityEngine::Timeline::GroupTrack*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::UnityEngine::Timeline::GroupTrack*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZNetExQTETagSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x2FCB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_735B19F2BDC753A9(::MoleMole::Timeline::ZNet::ZNetGroupTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::ZNet::ZNetGroupTrack*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_METHOD_1_735B19F2BDC753A9_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_0D2A79BBA866D7DC(::UnityEngine::Timeline::GroupTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::GroupTrack*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_METHOD_1_0D2A79BBA866D7DC_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_735B19F2BDC753A9_1(::MoleMole::Timeline::ZNet::ZNetGroupTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::ZNet::ZNetGroupTrack*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_METHOD_1_735B19F2BDC753A9_1_OFFSET))(this, a1);
		}
	};
}
