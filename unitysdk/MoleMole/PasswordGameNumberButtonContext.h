#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_E6A377784A0B8569;

#define MOLEMOLE_PASSWORDGAMENUMBERBUTTONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9941590)

namespace MoleMole
{
	inline static constexpr unsigned int PasswordGameNumberButtonContext_TypeDefinitionIndex = 47404;

	class PasswordGameNumberButtonContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_E6A377784A0B8569* UIModel; // 0x28
		::Foundation::AssetPath NumImageKey; // 0x30
		::Foundation::AssetPath NumTextImageKey; // 0x40
		::System::Boolean IsLocked; // 0x50
		::System::Char Input; // 0x52

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PASSWORDGAMENUMBERBUTTONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
