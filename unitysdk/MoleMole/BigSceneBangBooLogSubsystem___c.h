#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;

#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC30C150)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC30C190)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__SENDREQUEST_G__RPCCALLBACK_18_0_OFFSET UNITYSDK_OFFSET(0xC30C1A0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__SENDREQUEST_G__RPCERROR_18_1_OFFSET UNITYSDK_OFFSET(0xC30C1B0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneBangBooLogSubsystem___c_TypeDefinitionIndex = 39877;

	class BigSceneBangBooLogSubsystem___c : public ::System::Object
	{
	public:
		static ::MoleMole::BigSceneBangBooLogSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::BigSceneBangBooLogSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(BigSceneBangBooLogSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x3E800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _SendRequest_g__RpcCallback_18_0(::Class_0_16E4307DCC419505_7* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__SENDREQUEST_G__RPCCALLBACK_18_0_OFFSET))(this, rcvMessage);
		}

		::System::Void _SendRequest_g__RpcError_18_1(::Class_0_16E4307DCC419505_7* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___C__SENDREQUEST_G__RPCERROR_18_1_OFFSET))(this, rcvMessage);
		}
	};
}
