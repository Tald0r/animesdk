#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_6FA17C56E9FF6BCE_1;
class Class_1_C4C2ACF3D9655BEA_3;
class Class_1_F2196B2C7307287F;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::GalGame { class GalBubbleAction; }
namespace MoleMole::GalGame { class GalBubbleStoryNode; }
namespace MoleMole::GalGame { class GalScript; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7868F0A1246FB243_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A51CB0)
#define CLASS_2_7868F0A1246FB243_METHOD_2_150088F38FEECEF8_OFFSET UNITYSDK_OFFSET(0x8A57910)
#define CLASS_2_7868F0A1246FB243_METHOD_2_22B0891AF2748DF9_OFFSET UNITYSDK_OFFSET(0x8A58000)
#define CLASS_2_7868F0A1246FB243_METHOD_2_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x8A547B0)
#define CLASS_2_7868F0A1246FB243_METHOD_2_2685B6183E614529_2_OFFSET UNITYSDK_OFFSET(0x8A54820)
#define CLASS_2_7868F0A1246FB243_METHOD_2_2685B6183E614529_3_OFFSET UNITYSDK_OFFSET(0x8A578A0)
#define CLASS_2_7868F0A1246FB243_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8A54740)
#define CLASS_2_7868F0A1246FB243_METHOD_2_34658B0D57648CD1_OFFSET UNITYSDK_OFFSET(0x8A548F0)
#define CLASS_2_7868F0A1246FB243_METHOD_2_35FC1E4F0454E718_OFFSET UNITYSDK_OFFSET(0x8A573B0)
#define CLASS_2_7868F0A1246FB243_METHOD_2_50172808DEFC0BDD_OFFSET UNITYSDK_OFFSET(0x8A56E60)
#define CLASS_2_7868F0A1246FB243_METHOD_2_5DBE0D8848C75126_OFFSET UNITYSDK_OFFSET(0x8A57EB0)
#define CLASS_2_7868F0A1246FB243_METHOD_2_78705D334804DEE3_OFFSET UNITYSDK_OFFSET(0x8A567D0)
#define CLASS_2_7868F0A1246FB243_METHOD_2_83BB875EE12F12CD_OFFSET UNITYSDK_OFFSET(0x8A54470)
#define CLASS_2_7868F0A1246FB243_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x8A54FF0)
#define CLASS_2_7868F0A1246FB243_METHOD_2_96CCCC9A741D9D4F_OFFSET UNITYSDK_OFFSET(0x8A57550)
#define CLASS_2_7868F0A1246FB243_METHOD_2_9FD96628195B35ED_OFFSET UNITYSDK_OFFSET(0x8A55930)
#define CLASS_2_7868F0A1246FB243_METHOD_2_BC8E2121E3BBA5BE_OFFSET UNITYSDK_OFFSET(0x8A54580)
#define CLASS_2_7868F0A1246FB243_METHOD_2_C04C10246EBC8F79_OFFSET UNITYSDK_OFFSET(0x8A57DE0)
#define CLASS_2_7868F0A1246FB243_METHOD_2_C95AA3D14C9E2342_OFFSET UNITYSDK_OFFSET(0x8A551B0)
#define CLASS_2_7868F0A1246FB243_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8A52040)
#define CLASS_2_7868F0A1246FB243_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x8A54890)
#define CLASS_2_7868F0A1246FB243_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x8A57840)
#define CLASS_2_7868F0A1246FB243_METHOD_2_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x8A57BF0)
#define CLASS_2_7868F0A1246FB243_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8A51C50)
#define CLASS_2_7868F0A1246FB243_METHOD_2_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x8A57C50)
#define CLASS_2_7868F0A1246FB243_METHOD_2_E094BF6452602CC8_OFFSET UNITYSDK_OFFSET(0x8A54230)
#define CLASS_2_7868F0A1246FB243_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x8A546D0)
#define CLASS_2_7868F0A1246FB243_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x8A523D0)
#define CLASS_2_7868F0A1246FB243_METHOD_2_FB18C3BAB4FED5B2_OFFSET UNITYSDK_OFFSET(0x8A57AA0)
#define CLASS_2_7868F0A1246FB243_ONCREATE_OFFSET UNITYSDK_OFFSET(0x8A51E70)
#define CLASS_2_7868F0A1246FB243__CTOR_OFFSET UNITYSDK_OFFSET(0x8A520A0)

inline static constexpr unsigned int Class_2_7868F0A1246FB243_TypeDefinitionIndex = 81140;

class Class_2_7868F0A1246FB243 : public ::Foundation::SingletonDisposable_1<::Class_2_7868F0A1246FB243*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>* Field_2_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_C4C2ACF3D9655BEA_3*>* Field_2_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_2_5; // 0x20
	::System::Collections::Generic::List_1<::System::UInt64>* Field_2_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F2196B2C7307287F*>* Field_2_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_6FA17C56E9FF6BCE_1*>* Field_2_6; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Class_1_F2196B2C7307287F*>* Field_2_2; // 0x40
	::System::Collections::Generic::List_1<::System::UInt64>* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_2685B6183E614529_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_34658B0D57648CD1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_34658B0D57648CD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_907E24F785836BA0_OFFSET))(this);
	}

	::MoleMole::GalGame::GalBubbleAction* Method_2_C95AA3D14C9E2342(::MoleMole::GalGame::GalScript* a1)
	{
		return ((::MoleMole::GalGame::GalBubbleAction*(*)(::PVOID, ::MoleMole::GalGame::GalScript*))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_C95AA3D14C9E2342_OFFSET))(this, a1);
	}

	::System::Void Method_2_9FD96628195B35ED(::System::Int32 a1, ::System::Int32 a2, ::System::UInt64 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt64, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_9FD96628195B35ED_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529_3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_2685B6183E614529_3_OFFSET))(this, a1);
	}

	::Class_1_C4C2ACF3D9655BEA_3* Method_2_150088F38FEECEF8(::System::UInt64 a1)
	{
		return ((::Class_1_C4C2ACF3D9655BEA_3*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_150088F38FEECEF8_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB18C3BAB4FED5B2(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_FB18C3BAB4FED5B2_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_E094BF6452602CC8(::System::Int32 a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_E094BF6452602CC8_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_2_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Boolean Method_2_C04C10246EBC8F79(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_C04C10246EBC8F79_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_78705D334804DEE3(::System::Int32 a1, ::System::Int32 a2, ::System::UInt64 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt64, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_78705D334804DEE3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_2_35FC1E4F0454E718(::System::UInt64 a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_35FC1E4F0454E718_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5DBE0D8848C75126(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_5DBE0D8848C75126_OFFSET))(this, a1);
	}

	static ::System::Single Method_2_BC8E2121E3BBA5BE(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_BC8E2121E3BBA5BE_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStoryNode*>* Method_2_50172808DEFC0BDD(::MoleMole::GalGame::GalScript* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStoryNode*>*(*)(::PVOID, ::MoleMole::GalGame::GalScript*))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_50172808DEFC0BDD_OFFSET))(this, a1);
	}

	::System::Void Method_2_22B0891AF2748DF9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_22B0891AF2748DF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_F2196B2C7307287F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F2196B2C7307287F*))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::Class_1_C4C2ACF3D9655BEA_3* Method_2_83BB875EE12F12CD(::System::UInt64 a1)
	{
		return ((::Class_1_C4C2ACF3D9655BEA_3*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_83BB875EE12F12CD_OFFSET))(this, a1);
	}

	::System::Single Method_2_96CCCC9A741D9D4F(::MoleMole::GalGame::GalBubbleAction* a1, ::Class_1_F2196B2C7307287F* a2)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::GalGame::GalBubbleAction*, ::Class_1_F2196B2C7307287F*))((::PBYTE)hIl2Cpp + CLASS_2_7868F0A1246FB243_METHOD_2_96CCCC9A741D9D4F_OFFSET))(this, a1, a2);
	}
};
