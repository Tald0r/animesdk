#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
class Class_5_AF65C3A968E836D2;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CAMERAZOOMZ_B__114_0_OFFSET UNITYSDK_OFFSET(0x99CEE10)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x99CEDD0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x99CEE00)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DOUPDATE_B__213_0_OFFSET UNITYSDK_OFFSET(0x99CEEA0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DOUPDATE_B__213_1_OFFSET UNITYSDK_OFFSET(0x99CF000)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__INITVIDEOPOOL_G__ONRELEASE_182_1_OFFSET UNITYSDK_OFFSET(0x99CEE30)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__REQCAMERAZOOMZ_B__173_0_OFFSET UNITYSDK_OFFSET(0x99CEE20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController___c_TypeDefinitionIndex = 42993;

	class UIHollowChessboard3DModelController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_5_AF65C3A968E836D2*, ::System::Boolean>** StaticGet___9__213_1()
		{
			return (::System::Func_2<::Class_5_AF65C3A968E836D2*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x34680);
		}
		static ::MoleMole::UIHollowChessboard3DModelController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowChessboard3DModelController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x34688);
		}
		static ::System::Action_1<::Class_5_AF65C3A968E836D2*>** StaticGet___9__213_0()
		{
			return (::System::Action_1<::Class_5_AF65C3A968E836D2*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x34690);
		}
		static ::System::Action** StaticGet___9__173_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x34698);
		}
		static ::System::Action** StaticGet___9__114_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x346A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _CameraZoomZ_b__114_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CAMERAZOOMZ_B__114_0_OFFSET))(this);
		}

		::System::Void _ReqCameraZoomZ_b__173_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__REQCAMERAZOOMZ_B__173_0_OFFSET))(this);
		}

		::System::Void _InitVideoPool_g__OnRelease_182_1(::Class_1_7ECB9691B142D586* o)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__INITVIDEOPOOL_G__ONRELEASE_182_1_OFFSET))(this, o);
		}

		::System::Void _DoUpdate_b__213_0(::Class_5_AF65C3A968E836D2* c)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DOUPDATE_B__213_0_OFFSET))(this, c);
		}

		::System::Boolean _DoUpdate_b__213_1(::Class_5_AF65C3A968E836D2* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DOUPDATE_B__213_1_OFFSET))(this, c);
		}
	};
}
