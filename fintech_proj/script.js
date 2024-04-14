const cards = document.querySelectorAll('.card');
let currentCardIndex = 0;

function showCard(index) {
    cards.forEach((card, i) => {
        if (i === index) {
            card.style.display = 'block';
        } else {
            card.style.display = 'none';
        }
    });
}

document.getElementById('nextBtn').addEventListener('click', () => {
    currentCardIndex = (currentCardIndex + 1) % cards.length;
    showCard(currentCardIndex);
});

document.getElementById('prevBtn').addEventListener('click', () => {
    currentCardIndex = (currentCardIndex - 1 + cards.length) % cards.length;
    showCard(currentCardIndex);
});

showCard(currentCardIndex);

