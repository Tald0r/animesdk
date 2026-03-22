#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_SYNTAXCHECK_CHECKMACHINENAME_OFFSET UNITYSDK_OFFSET(0x191C9F00)
#define SYSTEM_COMPONENTMODEL_SYNTAXCHECK_CHECKPATH_OFFSET UNITYSDK_OFFSET(0x191C9F80)
#define SYSTEM_COMPONENTMODEL_SYNTAXCHECK_CHECKROOTEDPATH_OFFSET UNITYSDK_OFFSET(0x191C9FF0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int SyntaxCheck_TypeDefinitionIndex = 2984;

	class SyntaxCheck : public ::System::Object
	{
	public:
		static ::System::Boolean CheckMachineName(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SYNTAXCHECK_CHECKMACHINENAME_OFFSET))(value);
		}

		static ::System::Boolean CheckPath(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SYNTAXCHECK_CHECKPATH_OFFSET))(value);
		}

		static ::System::Boolean CheckRootedPath(::System::String* value)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SYNTAXCHECK_CHECKROOTEDPATH_OFFSET))(value);
		}
	};
}
