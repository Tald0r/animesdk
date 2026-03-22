#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_LDDESTROYENTITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCCD7530)
#define MOLEMOLE_FLOWCANVAS_LDDESTROYENTITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCCD7570)
#define MOLEMOLE_FLOWCANVAS_LDDESTROYENTITY___C__START_B__6_0_OFFSET UNITYSDK_OFFSET(0xCCD7580)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDDestroyEntity___c_TypeDefinitionIndex = 37858;

	class LDDestroyEntity___c : public ::System::Object
	{
	public:
		static ::MoleMole::FlowCanvas::LDDestroyEntity___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::LDDestroyEntity___c**)Il2CppClass::FromTypeDefinitionIndex(LDDestroyEntity___c_TypeDefinitionIndex)->GetStaticField(0x36550);
		}
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LDDestroyEntity___c_TypeDefinitionIndex)->GetStaticField(0x36558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDDESTROYENTITY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDDESTROYENTITY___C__CTOR_OFFSET))(this);
		}

		::System::Void _Start_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_LDDESTROYENTITY___C__START_B__6_0_OFFSET))(this);
		}
	};
}
