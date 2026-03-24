#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_640ADD7FDB40B430.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_1001;
class Class_3_10F339609BE79763_9;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_5_92C5056C0D6BEF37_METHOD_5_0649C5669745F185_OFFSET UNITYSDK_OFFSET(0x71F50D0)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_1313319A259598B1_OFFSET UNITYSDK_OFFSET(0x71F4F70)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x71F5AD0)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_38788AB673DA244E_OFFSET UNITYSDK_OFFSET(0x71F5C60)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x71F5370)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_6B465C5BAE82E2E4_OFFSET UNITYSDK_OFFSET(0x71F5520)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_858CF2EC5EE423D3_OFFSET UNITYSDK_OFFSET(0x71F4C10)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x71F5B50)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_B681D17F144F3FD0_OFFSET UNITYSDK_OFFSET(0x71F5890)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_C528AE3EFA8FD384_1_OFFSET UNITYSDK_OFFSET(0x71F5BD0)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_C528AE3EFA8FD384_OFFSET UNITYSDK_OFFSET(0x71F4ED0)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_C9986C2EBBF2AC1C_OFFSET UNITYSDK_OFFSET(0x71F5A60)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_D6ADD2D690E651D7_OFFSET UNITYSDK_OFFSET(0x71F59D0)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_DAE290F90FDB1103_1_OFFSET UNITYSDK_OFFSET(0x71F5A70)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_DAE290F90FDB1103_OFFSET UNITYSDK_OFFSET(0x71F4E60)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_E06ECA39EB16C571_OFFSET UNITYSDK_OFFSET(0x71F4D40)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_F39234F2606D8D97_1_OFFSET UNITYSDK_OFFSET(0x71F5600)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x71F4C20)
#define CLASS_5_92C5056C0D6BEF37_METHOD_5_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x71F5CD0)
#define CLASS_5_92C5056C0D6BEF37__CTOR_OFFSET UNITYSDK_OFFSET(0x71F5720)

inline static constexpr unsigned int Class_5_92C5056C0D6BEF37_TypeDefinitionIndex = 45243;

class Class_5_92C5056C0D6BEF37 : public ::Class_4_640ADD7FDB40B430
{
public:
	static ::System::UInt32* StaticGet_Field_5_4()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_5_92C5056C0D6BEF37_TypeDefinitionIndex)->GetStaticField(0x111B0);
	}
	::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* Field_5_0; // 0x2C0
	::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* Field_5_3; // 0x2C8
	::System::Collections::Generic::List_1<::System::Int32>* Field_5_2; // 0x2D0
	::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* Field_5_1; // 0x2D8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType Method_5_858CF2EC5EE423D3()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_858CF2EC5EE423D3_OFFSET))(this);
	}

	::System::Boolean Method_5_F39234F2606D8D97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_F39234F2606D8D97_OFFSET))(this);
	}

	::System::Int32 Method_5_E06ECA39EB16C571()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_E06ECA39EB16C571_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* Method_5_DAE290F90FDB1103()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_DAE290F90FDB1103_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> Method_5_C528AE3EFA8FD384(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_C528AE3EFA8FD384_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_1313319A259598B1(::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*&))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_1313319A259598B1_OFFSET))(this, a1);
	}

	::System::Void Method_5_0649C5669745F185(::Class_2_208CC9941471731A_1001* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1001*))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_0649C5669745F185_OFFSET))(this, a1);
	}

	::System::Void Method_5_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Boolean Method_5_6B465C5BAE82E2E4(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType&))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_6B465C5BAE82E2E4_OFFSET))(this, a1);
	}

	::Class_3_10F339609BE79763_9* Method_5_B681D17F144F3FD0()
	{
		return ((::Class_3_10F339609BE79763_9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_B681D17F144F3FD0_OFFSET))(this);
	}

	::System::Boolean Method_5_F39234F2606D8D97_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_F39234F2606D8D97_1_OFFSET))(this);
	}

	::System::Boolean Method_5_D6ADD2D690E651D7(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType&))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_D6ADD2D690E651D7_OFFSET))(this, a1);
	}

	::System::Void Method_5_C9986C2EBBF2AC1C(::Class_2_208CC9941471731A_1001* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1001*))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_C9986C2EBBF2AC1C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* Method_5_DAE290F90FDB1103_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_DAE290F90FDB1103_1_OFFSET))(this);
	}

	::System::Boolean Method_5_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_5_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_95780ED94B90ED36_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> Method_5_C528AE3EFA8FD384_1(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a2)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_C528AE3EFA8FD384_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_38788AB673DA244E(::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*&))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_38788AB673DA244E_OFFSET))(this, a1);
	}

	::System::Void Method_5_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_92C5056C0D6BEF37_METHOD_5_F5447CD65612575D_OFFSET))(this);
	}
};
