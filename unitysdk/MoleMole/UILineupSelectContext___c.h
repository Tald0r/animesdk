#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_48A3D3A34C52331D_14;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x68B7D30)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x68B7D70)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C__SETHOLLOWQUESTCONTEXT_B__64_2_OFFSET UNITYSDK_OFFSET(0x68B7E40)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__56_0_OFFSET UNITYSDK_OFFSET(0x68B7D80)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__57_0_OFFSET UNITYSDK_OFFSET(0x68B7DC0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__59_0_OFFSET UNITYSDK_OFFSET(0x68B7E00)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext___c_TypeDefinitionIndex = 67824;

	class UILineupSelectContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x34B70);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__57_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x34B78);
		}
		static ::System::Action_1<::Class_3_48A3D3A34C52331D_14*>** StaticGet___9__64_2()
		{
			return (::System::Action_1<::Class_3_48A3D3A34C52331D_14*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x34B80);
		}
		static ::MoleMole::UILineupSelectContext___c** StaticGet___9()
		{
			return (::MoleMole::UILineupSelectContext___c**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x34B88);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UILineupSelectContext___c_TypeDefinitionIndex)->GetStaticField(0x34B90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::String* __ctor_b__56_0(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__56_0_OFFSET))(this, _);
		}

		::System::String* __ctor_b__57_0(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__57_0_OFFSET))(this, _);
		}

		::System::String* __ctor_b__59_0(::System::Int32 _)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C___CTOR_B__59_0_OFFSET))(this, _);
		}

		::System::Void _SetHollowQuestContext_b__64_2(::Class_3_48A3D3A34C52331D_14* ret)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_48A3D3A34C52331D_14*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT___C__SETHOLLOWQUESTCONTEXT_B__64_2_OFFSET))(this, ret);
		}
	};
}
