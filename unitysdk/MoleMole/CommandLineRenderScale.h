#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CommandLineSettingBase_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class RenderScaleProfileContext; }

#define MOLEMOLE_COMMANDLINERENDERSCALE_METHOD_2_8A2C9EC446E16C94_OFFSET UNITYSDK_OFFSET(0x96F4250)
#define MOLEMOLE_COMMANDLINERENDERSCALE_METHOD_2_B2A7C6FDE215F575_OFFSET UNITYSDK_OFFSET(0x96F40F0)
#define MOLEMOLE_COMMANDLINERENDERSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x96F4210)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineRenderScale_TypeDefinitionIndex = 53891;

	class CommandLineRenderScale : public ::MoleMole::CommandLineSettingBase_2<::MoleMole::RenderScaleProfileContext*, ::MoleMole::CommandLineRenderScale*>
	{
	public:
		::System::Nullable_1<::System::Single> RenderScaleValue; // 0x18
		::System::Nullable_1<::System::Single> RenderTargetFactor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINERENDERSCALE__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineRenderScale* Method_2_B2A7C6FDE215F575(::MoleMole::RenderScaleProfileContext* a1)
		{
			return ((::MoleMole::CommandLineRenderScale*(*)(::PVOID, ::MoleMole::RenderScaleProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINERENDERSCALE_METHOD_2_B2A7C6FDE215F575_OFFSET))(this, a1);
		}

		::MoleMole::RenderScaleProfileContext* Method_2_8A2C9EC446E16C94(::MoleMole::RenderScaleProfileContext* a1)
		{
			return ((::MoleMole::RenderScaleProfileContext*(*)(::PVOID, ::MoleMole::RenderScaleProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINERENDERSCALE_METHOD_2_8A2C9EC446E16C94_OFFSET))(this, a1);
		}
	};
}
