#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_16;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FAD8D0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7FAD910)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__SETHOLLOWQUESTCONTEXT_B__65_2_OFFSET UNITYSDK_OFFSET(0x7FAD9E0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__57_0_OFFSET UNITYSDK_OFFSET(0x7FAD920)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x7FAD960)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__60_0_OFFSET UNITYSDK_OFFSET(0x7FAD9A0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c_TypeDefinitionIndex = 56004;

	class UILineupSelectContext___c : public ::System::Object
	{
	public:
		static ::MoleMole::UILineupSelectContext___c** StaticGet___9()
		{
			return (::MoleMole::UILineupSelectContext___c**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x374C0);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_16*>** StaticGet___9__65_2()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_16*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x374C8);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__60_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x374D0);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__57_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x374D8);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__58_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x374E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::String* __ctor_b__57_0(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__57_0_OFFSET))(this, _);
		}

		::System::String* __ctor_b__58_0(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__58_0_OFFSET))(this, _);
		}

		::System::String* __ctor_b__60_0(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__60_0_OFFSET))(this, _);
		}

		::System::Void _SetHollowQuestContext_b__65_2(::Class_3_48A3D3A34C52331D_16* ret)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_16*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__SETHOLLOWQUESTCONTEXT_B__65_2_OFFSET))(this, ret);
		}
	};
}
