#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD376C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCD376F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE___C__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0xCD37700)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCharacterIsMale___c_TypeDefinitionIndex = 68727;

	class LDCharacterIsMale___c : public ::System::Object
	{
	public:
		static ::MoleMole::FlowCanvas::Nodes::LDCharacterIsMale___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::Nodes::LDCharacterIsMale___c**)Il2CppClass::FromTypeDefinitionIndex(LDCharacterIsMale___c_TypeDefinitionIndex)->GetStaticField(0x45E30);
		}
		static ::FlowCanvas::ValueHandler_1<::System::Boolean>** StaticGet___9__0_0()
		{
			return (::FlowCanvas::ValueHandler_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LDCharacterIsMale___c_TypeDefinitionIndex)->GetStaticField(0x45E38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCHARACTERISMALE___C__REGISTERPORTS_B__0_0_OFFSET))(this);
		}
	};
}
